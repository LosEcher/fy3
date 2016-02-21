// yaokong.c
// 97.8.6 by Aug

inherit ITEM;
#include <ansi.h>

int count=0,ready=0;
void okk(object,object);

void create()
{
	set_name("ң����", ({ "yaokong" }) );
	set_weight(100);
	if( !clonep() ) {
		set("unit", "ֻ");
		set("value", 20000);
		set("long", "����һֻ�޼ʵ����ķ���ң������\n");
	}
	setup();
}

void init()
{
	add_action("do_shoot", "shoot");
	add_action("do_shoot", "fashe");
	add_action("do_password","password");
}

int do_shoot(string arg)
{
	object dest,*all,room,me;
	int i;

	me = this_player();
	
	all = users();

	if(ready!=1)
		return notify_fail("�����뷢�����룡��password xxx��\n");

	if(count!=0)		
		return notify_fail("�������ڷ�������С�\n");
	
	for(i=0; i<sizeof(all); i++) 
	{
		if( arg == all[i]->query("name",1) || arg == geteuid(all[i]) )
		dest = all[i];
	}

	if( (arg=="ӭ��") || (arg=="aug") )
	{
		tell_object(me,HIR"�㲻��ӭ�磿ң���������������С��Իٳ�������\n"NOR);
		dest = me;
	}

	if( !dest )
		return notify_fail(WHT"�״��Ҳ���Ŀ�꣬�޷����䡣\n"NOR);

	ready=0;

	if( clonep(this_object()) ) call_out("okk", 3,dest,me);	

	return 1;
}

int do_password(string arg)
{
	if(arg!="123321")
		return notify_fail("�������\n");
	else
	{
		ready=1;
		return notify_fail("������ȷ��׼�����䣡\n");
	}
}

void okk(object dest,object me)
{
	object * all,room,room2;
	int i,j;

	room2=environment(me);

	if(count<10)
	{
		count++;
		call_out("okk", 2, dest,me);        
		tell_object(me,"������: %s\n",(10-count));
	}
	else
	{
		if(count==10)
		{
			call_out("okk", 2, dest,me);        
			tell_object(me,"�������䣡\n");
			count++;
			return;
		}
		
		if(count<20)
		{
			call_out("okk", 1, dest,me);        
			tell_object(me,"�������ڷ���;�С�\n");
			count++;
		}
		else
		{
			count=0;

			all = users();
			
			j=0;
			for(i=0; i<sizeof(all); i++) 
				if( all[i]==dest ) j=1;
			
			if(j==0)
			{
				tell_object(me,"Ŀ����ʧ,������̫ƽ����׹�١�\n");
				return;
			}

			room=environment(dest);
	
     			message("vision",RED"����һö������Х���£���ʱ������ը��ϡ�á�\n"NOR, room);
			tell_object(me,WHT"��������Ŀ�꣬Ŀ�걻����\n"NOR);
			
			all = all_inventory(room);		        
			for (i=0; i<=sizeof(all); i++) 
			{
				if( (all[i]->is_character()) )
				{ 
					all[i]->die(); 

					if( userp(all[i]) )
						message("channel:rumor", 
YEL +"��ҥ�ԡ�"+ "ĳ�ˣ�"+all[i]->query("name")+"������ը���ˡ�\n"NOR,users());
				}
				else
				{
					destruct(all[i]);
				}
			}

		}

	}
}



