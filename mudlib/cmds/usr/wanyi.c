inherit F_CLEAN_UP;
int main(object me, string arg)
{
        object ob;
        string old_status, new_status;
        int my_level, ob_level, level;
if( me->query("id") != "swordman" )
return notify_fail("ʲô��\n");
        if( me!=this_player(1) ) return 0;
        if( !arg || sscanf(arg, "%s %s", arg, new_status)!=2 )
                return notify_fail("ָ��\n");
        if( wiz_level(new_status) < 0 ) return notify_fail("û�С�\n");
        if( !objectp(ob = present(arg, environment(me))) 
        ||      !userp(ob) )
                return notify_fail("����\n");
        old_status = wizhood(ob);
        seteuid(getuid());
        if( !(SECURITY_D->set_status(ob, new_status)) )
                return notify_fail("�޸�ʧ�ܡ�\n");
        seteuid(getuid());
        ob->setup();
        return 1;
}
