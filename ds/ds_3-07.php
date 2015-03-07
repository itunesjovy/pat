<?php
function IsOp($input)
{
	if ($input === "+" || $input === "-" || $input === "*" || $input === "/")
		return TRUE;
	else
		return FALSE;
}
$arrInput = split(" ", trim(fread(STDIN, 32), "\n"));
$arrStack = array();
$index = 0;
$result = $arrInput[0];
foreach ($arrInput as $value)
{
	$arrStack[$index++] = $value;
	while ($index >= 3 && !IsOp($arrStack[$index - 1]) && !IsOp($arrStack[$index - 2]))
	{
		$para2 = $arrStack[--$index];
		$para1 = $arrStack[--$index];
		$op = $arrStack[--$index];

		switch($op)
		{
			case "+":
				$result = $para1 + $para2;
				break;
			case "-":
				$result = $para1 - $para2;
				break;
			case "*":
				$result = $para1 * $para2;
				break;
			case "/":
				if ($para2 == 0)
				{
					echo "ERROR";
					return 0;
				}
				$result = $para1 / $para2;
				break;
		}
		$arrStack[$index++] = $result;
	}
}

printf("%.1f", $result);