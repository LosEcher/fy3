// bath.c
// by musix

void wakeup(object,object);
void del_sleeped(object);

int main(object me, string arg)
{
	mapping fam;
	object where = environment(me);
	int ttt;

        seteuid(getuid());

	if (!(where->query("bath_room"))  )
             return notify_fail("������ϴ�����̫��ȫ��\n");
   
	if (me->is_busy())
		return notify_fail("����æ���أ�\n");

	if( me->is_fighting() )
		return notify_fail("����������\n");
        
	if (where->query("hotel") && !(me->query_temp("rent_paid")))
	{
		message_vision("���û��̽ͷ������$N��������Ǯ����ϴ!\n",me);
		return 1;
	}
 
	if (me->query_temp("bathed"))
		return notify_fail("����ϴ������ϴ�������к�����! \n");

	if (where->query("bath_room"))
	{
            if(where->query("bath_equipment"))
              {	
	       
                write("���������������渴��������"+
                where->query("bath_equipment")+"�\n");
               }
            else{ 
                write("������������ʼϴ�衣\n");  
                }
		me->set_temp("block_msg/all",1);
		message_vision("$N����������ʼϴ�衣\n",me);
	}

	where->set("no_fight", 1);
	where->add_temp("bathing_person", 1);

	me->set("no_get", 1);	
	me->set("no_get_from", 1);	
	
	if (!(where->query("hotel"))) 
		me->set_temp("bathed",1);
	else
		me->delete_temp("rent_paid");

	me->disable_player("<ϴ����>");
        ttt= me->query_con() ;
        if(ttt>40) ttt=40 ;
//	call_out("wakeup",random(45 - me->query("con")) + 45, me, where);
        call_out("wakeup",random(60 - ttt) , me, where);        
	return 1;
	
}

void wakeup(object me,object where)

{

	if((int)me->query("force")+100>=(int)me->query("max_force"))
		me->set("force",(int)me->query("max_force"));
	else	me->add("force",100);
	if((int)me->query("mana")+50>=(int)me->query("max_mana"))
		me->set("mana",(int)me->query("max_mana"));
	else	me->add("mana",50);
	if((int)me->query("atman")+50>=(int)me->query("max_atman"))
		me->set("atman",(int)me->query("max_atman"));
	else	me->add("atman",50);


	me->enable_player();
  
	call_out("del_bathed", 359, me);

	message_vision("$Nϴ���裬�������·���\n",me);
	me->set_temp("block_msg/all", 0);
	write("���������·�������ö��ˡ�\n");

	if (!where->query("bath_room") && !where->query("hotel"))
		where->delete("no_fight");
     
	where->add_temp("bathing_person", -1);
	me->delete("no_get");	
	me->delete("no_get_from");	
 
}

void del_sleeped(object me)
{
	if (objectp(me) &&  me->query_temp("bathed"))
		me->delete_temp("bathed");
}
