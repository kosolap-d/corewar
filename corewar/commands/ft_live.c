
#include "../corewar.h"

void    ft_live(t_corewar *data, t_carriage *src)
{
    ft_inc_index(src);
    src->arg[1] = (data->game_field[ft_inc_index(src)] << 24) | (data->game_field[ft_inc_index(src)] << 16) | (data->game_field[ft_inc_index(src)] << 8) | (data->game_field[ft_inc_index(src)]);
    if (-src->arg[1] >= 1 && -src->arg[1] <= data->count_ply)
    {
        data->players_live[-src->arg[1] - 1]++;
        src->live_in_cycle++;
    }
    src->live_in_cycle++;
    ft_bzero(src->arg, 16);
}
