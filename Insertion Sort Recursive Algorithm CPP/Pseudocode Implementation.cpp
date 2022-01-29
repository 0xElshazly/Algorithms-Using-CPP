/*
		-----[Pseudocode Implementation]-----
		insertionSortRecursive(arr, size)
		begin
		|  if size <= 1
		|      return
		|  insertionSortRecursive(arr, size - 1);
		|  temp := arr[size -1];
		|  i := size - 2;
		|  while i >= 0 and arr[i] > temp do
		|  |	begin
		|  |	 | arr[i + 1] := arr[i];
		|  |	 | i := i - 1;
		|  |	end;
		|  |	arr[i + 1] := temp;
		| end;
		end;
*/