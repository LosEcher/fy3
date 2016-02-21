// sleep.c
// littlefish
// modify by musix 97.7

void wakeup(object,object);
void del_sleeped(object);

int main(object me, string arg)
{
	mapping fam;
	object where = environment(me);
	int ttt;

        seteuid(getuid());

	if ( (!(fam = me->query("family")) || fam["family_name"] != "ؤ��")
             && !(where->query("sleep_room"))
             || (where->query("no_sleep_room")) )
             return notify_fail("������˯������̫���ʡ�\n");
   
	if (me->is_busy())
		return notify_fail("����æ���أ�\n");

	if( me->is_fighting() )
		return notify_fail("����������\n");
        
	if (where->query("hotel") && !(me->query_temp("rent_paid")))
	{
		message_vision("��С���������$N���: ��û���! ��Ǯ������˯!\n",me);
		return 1;
	}
 
	if (me->query_temp("sleeped"))
		return notify_fail("��˯������˯�������к�����! \n");

	if (where->query("sleep_room"))
	{
		write("�����Ժ������˸������˯���ˡ�\n");
	//	write("��һ�������ͽ��������硣\n");
		me->set_temp("block_msg/all",1);
		message_vision("$N���˸���Ƿ��ͷһ��ͽ��������硣\n",me);
	}
	else { 
		write("�������½���һ�ɣ���ʼ˯����\n");
		me->set_temp("block_msg/all",1);
		message_vision("$Nͷһ�ᣬ��һ�����������������������\n",me);
	}

	where->set("no_fight", 1);
	where->add_temp("sleeping_person", 1);

	me->set("no_get", 1);	
	me->set("no_get_from", 1);	
	
	if (!(where->query("hotel"))) 
		me->set_temp("sleeped",1);
	else
		me->delete_temp("rent_paid");

	me->disable_player("<˯����>");
        ttt= me->query_con() ;
        if(ttt>40) ttt=40 ;
//	call_out("wakeup",random(45 - me->query("con")) + 45, me, where);
        call_out("wakeup",random(50 - ttt) , me, where);        
	return 1;
	
}

void wakeup(object me,object where)

{

	me->set("kee",  me->query("eff_kee"));
	me->set("gin",  me->query("eff_gin"));
	me->set("sen",me->query("eff_sen"));
	me->enable_player();
  
	call_out("del_sleeped", 119, me);

	message_vision("$Nһ��������Ҳ��֪˯�˶�á�\n",me);
	me->set_temp("block_msg/all", 0);
	write("��һ���������о��ö��ˡ�\n");

	if (!where->query("sleep_room") && !where->query("hotel"))
		where->delete("no_fight");
     
	where->add_temp("sleeping_person", -1);
	me->delete("no_get");	
	me->delete("no_get_from");	
 
}

void del_sleeped(object me)
{
	if (objectp(me) &&  me->query_temp("sleeped"))
		me->delete_temp("sleeped");
}
