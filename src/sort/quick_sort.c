/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulba <sabdulba@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 00:31:12 by sabdulba          #+#    #+#             */
/*   Updated: 2025/01/06 03:50:09 by sabdulba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "push_swap.h"
#include <stdio.h>

void 	ft_swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	partition(int *arr, int low, int high)
{
	int	pivot;
	int	i;
	int	j;

	i = low - 1;
	j = high + 1;
	pivot = arr[low];
	while (1)
	{
		while (arr[++i] < pivot);
		while (arr[--j] > pivot);
		if (i > j)
			return (j);
		ft_swap(&arr[i], &arr[j]);
	}
	
}

void	quick_sort(int *array, int low, int high)
{
	int	part;

	if (low < high)
	{
		part = partition(array, low, high);
		quick_sort(array, low, part);
		quick_sort(array, part + 1, high);
	}
}

// void printArray(int arr[], int size) {
//     for (int i = 0; i < size; i++)
//         printf("%d ", arr[i]);
//     printf("\n");
// }

// // Driver code to test above functions
// int main() {
//     int arr[] = {10, 7, 8, 9, 1, 5};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     quick_sort(arr, 0, n - 1);
//     printf("Sorted array: \n");
//     printArray(arr, n);
//     return 0;
// }
