// finger.c

inherit F_CLEAN_UP;

void create()
{
	seteuid(getuid());
}

int main(object me, string arg)
{
	if( !arg ) {
		if(!wizardp(me) && (int)me->query("sen") < 90 )
			return notify_fail("��ľ����޷����С�\n");
		if( !wizardp(me) )
			me->receive_damage("sen", 50);
                if( !wizardp(me) )
                   {
		    write( FINGER_D->pfinger_all() );
                   }
                else{
                    write( FINGER_D->finger_all() );
                    }
	} else {
		if(!wizardp(me)&&(int)me->query("sen") < 90 )
			return notify_fail("��ľ����޷����С�\n");
		if( !wizardp(me) )
			me->receive_damage("sen", 15);
                if( !wizardp(me) )
                    {
	         	write( FINGER_D->pfinger_user(arg) );
                    }
                else{
                     write( FINGER_D->finger_user(arg) );
                    }
	}
	return 1;
}

int help(object me)
{
  write(@HELP
ָ���ʽ : finger [ʹ��������]
 
���ָ��, ���û��ָ��ʹ��������, ����ʾ�����������������
����������. ��֮, �����ʾ�й�ĳ����ҵ�����, Ȩ�޵�����.
 
see also : who
HELP
    );
    return 1;
}
 
