# 3 tables

--1
 select count(1)
from tblbenutzer, tblchips, tblzutrittsversuche
--2

select tblbenutzer.BenutzerID
from tblbenutzer
inner join tblchips on tblchips.tblBenutzer_BenutzerID = tblbenutzer.BenutzerID
where tblchips.ChipSerienNr = '01104A3EE085'

--3

select tblbenutzer.BenutzerID, tblbenutzer.Nachname
from tblbenutzer
inner join tblchips on tblchips.tblBenutzer_BenutzerID = tblbenutzer.BenutzerID
where tblchips.ChipSerienNr = '01104A3EE085'

--4

select tblchips.ChipSerienNr
from tblbenutzer
inner join tblchips on tblchips.tblBenutzer_BenutzerID = tblbenutzer.BenutzerID
where tblbenutzer.Nachname = 'Nettmann'

--5

select count(Ergebnis)
from tblbenutzer
inner join tblchips on tblchips.tblBenutzer_BenutzerID = tblbenutzer.BenutzerID
left join tblzutrittsversuche on tblchips.ChipsID = tblzutrittsversuche.tblChips_ChipsID
where tblbenutzer.Nachname = 'Maier' and tblzutrittsversuche.Ergebnis = 'Zutritt gestattet'

--6

select tblbenutzer.Nachname, Count(Ergebnis) as abgelehnt
from tblbenutzer
inner join tblchips on tblchips.tblBenutzer_BenutzerID = tblbenutzer.BenutzerID
left join tblzutrittsversuche on tblchips.ChipsID = tblzutrittsversuche.tblChips_ChipsID
where tblzutrittsversuche.Ergebnis = 'Zutritt abgelehnt'
group by tblbenutzer.Nachname
order by abgelehnt desc

--7

select tblbenutzer.Nachname, Count(Ergebnis) as abgelehnt
from tblbenutzer
inner join tblchips on tblchips.tblBenutzer_BenutzerID = tblbenutzer.BenutzerID
left join tblzutrittsversuche on tblchips.ChipsID = tblzutrittsversuche.tblChips_ChipsID
where tblzutrittsversuche.Ergebnis = 'Zutritt abgelehnt'
group by tblbenutzer.Nachname
having abgelehnt > 8
order by abgelehnt desc

--8

select tblbenutzer.Nachname, Count(Ergebnis) as versuche
from tblbenutzer
inner join tblchips on tblchips.tblBenutzer_BenutzerID = tblbenutzer.BenutzerID
left join tblzutrittsversuche on tblchips.ChipsID = tblzutrittsversuche.tblChips_ChipsID
group by tblbenutzer.Nachname
order by versuche, Nachname asc


--9

select tblbenutzer.Nachname, Max(Zeitstempel) as versuche
from tblbenutzer
inner join tblchips on tblchips.tblBenutzer_BenutzerID = tblbenutzer.BenutzerID
inner join tblzutrittsversuche on tblchips.ChipsID = tblzutrittsversuche.tblChips_ChipsID
where Ergebnis = 'Zutritt abgelehnt'
group by tblbenutzer.Nachname
order by versuche, Nachname asc

--10

select tblbenutzer.Nachname, Max(Zeitstempel) as Letzter, Min(Zeitstempel) as Erster
from tblbenutzer
inner join tblchips on tblchips.tblBenutzer_BenutzerID = tblbenutzer.BenutzerID
inner join tblzutrittsversuche on tblchips.ChipsID = tblzutrittsversuche.tblChips_ChipsID
where Ergebnis = 'Zutritt abgelehnt'
group by tblbenutzer.Nachname
order by  Nachname asc
tja

--11
select *
from (
		select Nachname, count(ergebnis) as abgelehnt
		from tblbenutzer
		inner join tblchips on tblchips.tblBenutzer_BenutzerID = tblbenutzer.BenutzerID
		inner join tblzutrittsversuche on tblchips.ChipsID = tblzutrittsversuche.tblChips_ChipsID
		where tblzutrittsversuche.Ergebnis = 'Zutritt abgelehnt'
        group by tblbenutzer.Nachname
                order by abgelehnt desc
        ) as zutrittsversuche
        having abgelehnt > avg(abgelehnt)


---
```