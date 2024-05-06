/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sparth <sparth@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 15:25:46 by sparth            #+#    #+#             */
/*   Updated: 2024/05/06 14:31:23 by sparth           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

size_t	ft_strllcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	src_i;

	src_i = 0;
	if (dstsize == 0)
	{
		while (src[src_i])
			src_i++;
		return (src_i);
	}
	while (src_i < dstsize - 1 && src[src_i] != '\0')
	{
		if (src[src_i] == '\n')
			dst[src_i] = '\0';
		else
			dst[src_i] = src[src_i];
		src_i++;
	}
	dst[src_i] = '\0';
	while (src[src_i] != '\0')
		src_i++;
	return (src_i);
}

int	count_lines(char *file)
{
	int		fd;
	int		line_count;
	char	*line;
	
	line_count = 0;
	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		printf("error opening file\n");
		exit (1);
	}
	while (1)
	{
		line = get_next_line(fd);
		if (!line)
			break;
		free(line);
		line_count++;
	}
	if (close(fd) == -1)
	{
		printf("fatal error: closing the file failed\n");
		exit (1);
	}
	return (line_count);
}

void	free_and_exit_map(char **map, int i)
{
	while (i--)
		free(map[i]);
	if (map)
		free(map);
	printf("memory allocation failed\n");
	exit (1);
}

// libft strlcpy modified !!!
// to replace '\n' with '\0'

char	**create_map(char *file, int line_count)
{
	char	*line;
	char	**map;
	int		fd;
	int		line_len;
	int		i;
	
	i = 0;
	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		printf("error opening file\n");
		exit (1);
	}
	map = (char **)malloc(sizeof(char *) * (line_count + 1));
	if (!map)
	{
		printf("memory allocation failed\n");
		exit (1);
	}
	while (1)
	{
		line = get_next_line(fd);
		if (!line)
			break;
		line_len = ft_strlen(line);
		map[i] = (char *)malloc(sizeof(char) * (line_len + 1));
		if (!map[i])
		{
			free(line);
			free_and_exit_map(map, i);
		}
		ft_strllcpy(map[i], line, sizeof(line) + 1);
		free(line);
		i++;
	}
	map[i] = NULL;
	return (map);
}

void	print_map(char **map)
{
	int	i;

	i = 0;
	while (map[i])
		printf("%s\n", map[i++]);
}

void	check_and_create_map(int argc, char *file)
{
	int		line_count;
	char	**map;
	
	if (argc != 2)
	{
		printf("wrong number of arguments!\n");
		exit (1);
	}
	line_count = count_lines(file);
	map = create_map(file, line_count);
	
	print_map(map);
}

void	ft_hook(void *param)
{
	mlx_t *mlx = param;

	if (mlx_is_key_down(mlx, MLX_KEY_ESCAPE))
		mlx_close_window(mlx);
}

int	main(int argc, char *argv[])
{
	mlx_t		*mlx;
	mlx_image_t	*image;
	
	check_and_create_map(argc, argv[1]);
	mlx = mlx_init(WIDTH, HEIGHT, "cub3d", true);
	if (!mlx)
	{
		printf("mlx_init failed\n");
		return (1);
	}
	image = mlx_new_image(mlx, WIDTH, HEIGHT);
	if (!image)
	{
		printf("mlx_new_image failed\n");
		return (1);
	}
	if ((mlx_image_to_window(mlx, image, 0, 0)) == -1)
	{
		printf("mlx_image_to_window failed\n");
		return (1);
	}
	mlx_loop_hook(mlx, ft_hook, mlx);
	mlx_loop(mlx);
	mlx_terminate(mlx);
	return (0);
}
