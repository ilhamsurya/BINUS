contoh algoritma pseudocode mencetak bilangan genap dengan range tertentu

module bilanganGenap(start,end)
    if(end % 2 == 0 )
        bilanganGenap(start, end - 2);
    else
        bilanganGenap(start, end - 1);
    end if
    if (end % 2 == 0)
        print end
    end if
end module