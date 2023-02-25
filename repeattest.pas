{--------------------------------------------------------------------}
{File repeattest.pas exercises Subset Pascal arrays and repeat-until }
{loops                                                               }
{--------------------------------------------------------------------}
{Author: Thomas R Turner                                             }
{E-Mail: trturner@uco.edu                                            }
{Date:   February, 2020                                              }
{--------------------------------------------------------------------}
{Copyright February, 2020 by Thomas R Turner.                        }
{Do not reproduce without permission from Thomas R Turner.           }
{--------------------------------------------------------------------}
program repeattest;
  var A:array[0..9] of integer;
  var i:integer;
begin{repeattest}
  i:=0;
  repeat
    A[i]:=i*i;
    i:=i+1
  until i>9;
  i:=0;
  repeat
    writeln;
    write('A['); write(i); write(']='); write(A[i]);
    i:=i+1
  until i>9;
  writeln
end{repeattest}.
