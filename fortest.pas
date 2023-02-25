{--------------------------------------------------------------------}
{File fortest.pas exercises Subset Pascal arrays and for-loops.      }
{--------------------------------------------------------------------}
{Author: Thomas R Turner                                             }
{E-Mail: trturner@uco.edu                                            }
{Date:   February, 2020                                              }
{--------------------------------------------------------------------}
{Copyright February, 2020 by Thomas R Turner.                        }
{Do not reproduce without permission from Thomas R Turner.           }
{--------------------------------------------------------------------}
program fortest;
  var A:array[0..9] of integer;
  var i:integer;
begin{fortest}
  for i:=0 to 9 do A[i]:=i*i;
  for i:=9 downto 0 do
  begin{for}
    writeln;
    write('A['); write(i); write(']='); write(A[i])
  end{for};
  writeln
end{fortest}.
