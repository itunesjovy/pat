<?php
$output = array();
$i = 0;
while (TRUE)
{
	$output[$i] = "";
	$c = fgetc(STDIN);
	while (($c != " ") && ($c != "\n"))
	{
		$output[$i] .= $c;
		$c = fgetc(STDIN);
	}
	$i++;
	if ($c == "\n")
		break;
}
while (--$i != 0)
	echo $output[$i]." ";
if (isset($output[0]))
	echo $output[0];