<?php
$suck = explode("\n", fgets(STDIN, 14000));
$string = $suck[0];
$input = array();
$input = explode(" ", $string);
$i = 0;
$output = array();
for ($key = 0; $key < count($input); $key = $key + 2)
{
    if ($input[$key + 1] == 0)
        continue;
    $output[$i++] = $input[$key] * $input[$key + 1];
    $output[$i++] = $input[$key + 1] - 1;
}
$result = implode(" ", $output);
if ($result == "")
    echo "0 0";
else
    echo $result;