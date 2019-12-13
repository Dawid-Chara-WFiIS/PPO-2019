#include "Operacje.h"
#include "Czas.h"
#include "PolozeniePoczatkowe.h"
#include "Predkosc.h"
#include "Przyspieszenie.h"

float Polozenie()
{
    return Suma(Suma(Iloczyn(Iloczyn(Przyspieszenie(), Kwadrat(Czas())), 0.5), Iloczyn(Predkosc(),Czas())), PolozeniePoczatkowe());
}