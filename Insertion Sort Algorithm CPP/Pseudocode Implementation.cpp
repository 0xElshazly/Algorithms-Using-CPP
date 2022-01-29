/*
	-----[Pseudocode Implementation]-----
	insertionSort(arr, size)
	begin
	|  for i := 1 to size do
	|  begin
	|  |	temp := arr[i];
	|  |	j := i - 1;
	|  |	while j >= 0 and arr[j] > temp do
	|  |	begin
	|  |	 | arr[j + 1] := arr[j];
	|  |	 | j := j - 1;
	|  |	end;
	|  |	arr[j + 1] := temp;
	| end;
	end;
*/
