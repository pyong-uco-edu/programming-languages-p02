{--------------------------------------------------------------------}
{File whiletest.pas exercises Subset Pascal arrays and while-loops.  }
{--------------------------------------------------------------------}
{Author: Thomas R Turner                                             }
{E-Mail: trturner@uco.edu                                            }
{Date:   February, 2020                                              }
{--------------------------------------------------------------------}
{Copyright February, 2020 by Thomas R Turner.                        }
{Do not reproduce without permission from Thomas R Turner.           }
{--------------------------------------------------------------------}
program whiletest;
  var A:array[0..9] of integer;
  var i:integer;
begin{whiletest}
  i:=0;
  while i<=9 do 
  begin{while}
    A[i]:=i*i;
    i:=i+1
  end{while};
  i:=9;
  while i>=0 do
  begin{while}
    writeln;
    write('A['); write(i); write(']='); write(A[i]);
    i:=i-1
  end{while};
  writeln
end{whiletest}.
