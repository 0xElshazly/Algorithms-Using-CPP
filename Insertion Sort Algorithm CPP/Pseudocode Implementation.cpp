/*
	-----[Pseudocode Implementation]-----
	insertionSort(arr, size)
	begin
	|  for i := 1 to size do
	|  begin
	|  |	temp := A[i];
	|  |	j := i - 1;
	|  |	while j >= 0 and A[j] > temp do
	|  |	begin
	|  |	 | A[j + 1] := A[j];
	|  |	 | j := j - 1;
	|  |	end;
	|  |	A[j + 1] := temp;
	| end;
	end;
*/
