// sing.c  �̺�������
// 97.8.18 by Aug

//inherit SSERVER;

#include <ansi.h>
int exert(object me, object target)
{
	int i,j,damage;
	object * all,ob;

	if ((int)me->query_skill("suiyu-force",1)<80)
		return notify_fail("��������񹦹����������޷�����̺���������\n");

	if ((int)me->query_skill("literate",1)<80)
		return notify_fail("����Ļ������������޷�����̺���������\n");

	if ((int)me->query("force")<300)
		return notify_fail("���������������������̺���������\n");

	ob=me->query_temp("weapon");
	if ( ((!ob)||(ob->query("can_sing")!="yes" )) ) 
		return notify_fail("��û��װ��������ô����̺�����������\n");

	message_vision(CYN"$N����һ֧"+ob->query("name")+CYN+"�������Ĵ�����̺���������\n"NOR, me);

      all = all_inventory(environment(me)); 

	for (i=0; i<sizeof(all); i++) 
	{
		if( userp(all[i]) )
		{
			if(all[i]!=me)
			{
				tell_object(all[i],
HIR"��ֻ��������������ô�Ķ�������֪�������������������������������������������衣
��ֱ��������������������а����Ų��ɱ�����㲻�ò��˹��򿹡�\n"NOR);				
			}
		}

		if( ( (all[i]->is_character())&&(all[i]->query("id")!="corpse") ) )
			all[i]->set_temp("sing",1);
	}

	damage = 90*me->query_skill("suiyu-force",1)/100*(8+ob->query("sing_level"))/10;

	call_out("do_sing",1,me,0,damage);

	return 1;
}
	
int check_sing(object me,object ob)
{
	int i,j;
	object * all;	
	string s;
	mapping exits;
      string *dirs;


	ob->set_temp("sing",2);

	if(ob->query("cps")>ob->query("spi")) 
		i=ob->query("cps"); 
	else 
		i=ob->query("spi");

	j=(ob->query_skill("force")*1200/me->query_skill("force")+
		ob->query("combat_exp")*1200/me->query("combat_exp")+
			i*600/26)/3;
	if(j<825) j=825;
	j=random(j);

	if(j>5500)
	{
		all = all_inventory(environment(me)); 
		for (i=0; i<sizeof(all); i++) 
		{
			if(all[i]==ob) s=HIC+"��";
				else s=HIC+ob->query("name");
			s+="�����ڹ����һ�����ŵ�";
			if(all[i]==me) s+=HIC+"��";
				else s+=HIC+me->query("name");
			s+="���˸����£������е���Ҳ�����˵��ϡ�\n"+HIR+"����'��'���³�һ�����Ѫ���������˼��ص����ˡ�\n"NOR;

			tell_object(all[i],s);
		}

		me->receive_wound("kee",100+random(ob->query_skill("force")) );
		if(me->query("kee")<0)
		{
			me->die();
			message("channel:rumor", 
YEL"��ҥ�ԡ�"+ "ĳ�ˣ�"+me->query("name")+"��"+ob->query("name")+"�ĺ��������ˡ�\n"NOR,users());
		}

		return 2;
	}
		
	if( userp(ob) )
	{
		if(j>100)
		{
			all = all_inventory(environment(me)); 
			for (i=0; i<sizeof(all); i++) 
			{
				if(all[i]==ob) 
					tell_object(all[i],HIC"���Լ���Ķ�������ס�˱̺��������ľ޴��ջ󣬷ɲ��뿪�˵ء�\n"NOR);
				else
					tell_object(all[i],HIC+ob->query("name")+"�Լ���Ķ�������ס�˱̺��������ľ޴��ջ󣬷ɲ��뿪�˵ء�\n"NOR);
			}
		
			if( !mapp(exits = environment(me)->query("exits")) )  	
			{
				for (i=0; i<sizeof(all); i++) 
				{
					if(all[i]==ob) 
						tell_object(all[i],HIC"�����㷢�ָ���û��·���Գ�ȥ����ֻ�����������˹��������򿹡�\n"NOR);
					else
						tell_object(all[i],HIC"����"+ob->query("name")+"���ָ���û��·���Գ�ȥ��"+ob->query("name")+"ֻ�����������˹��������򿹡�\n"NOR);
				}
			}
			else
			{
			     	dirs = keys(exits);
							tell_object(ob,"1\n");

				for(i=0;i<sizeof(dirs);i++)
				{
						tell_object(ob,"2\n");

					if( environment(me)->valid_leave(ob, dirs[i]))	
					{
						tell_object(ob,"3\n");
						ob->move(exits[dirs[i]]);
						return 3;
					}
				}

				for (i=0; i<sizeof(all); i++) 
				{
					if(all[i]==ob) 
						tell_object(all[i],HIC"�����㷢�����޷��뿪�����ֻ�����������˹��������򿹡�\n"NOR);
					else
						tell_object(all[i],HIC"����"+ob->query("name")+"�����޷��뿪���"+ob->query("name")+"ֻ�����������˹��������򿹡�\n"NOR);
				}			
				
			}
		}
	}

	return 1;
}

void do_sing(object me,int ptime,int damage)
{
	int i,j,k;
	object * all;

	all = all_inventory(environment(me)); 

	k=0;

	for (i=0; i<sizeof(all); i++) 
	{
		if( ( (all[i]->is_character())&&(all[i]->query("id")!="corpse") ) )
		{
			all[i]->start_busy(3);						

			if(all[i]!=me)
			{
				if(all[i]->query_temp("sing")!=2)
				{
					j=check_sing(me,all[i]);
					if(j==2) 
					{
						for (j=0; j<sizeof(all); j++) 
							all[j]->delete_temp("sing");
						return;
					}	
					if(j==3)
					{
						all[i]->delete_temp("sing");
						all = all_inventory(environment(me)); 

						i--;
					}
				}
				else j=0;


				if(j!=3)
				{

				k=1;
				j=all[i]->query("force")+all[i]->query("kee");				

				if(j<damage)
				{
					message("vision",
RED+all[i]->query("name")+"�������������Ѻľ������߶�����\n"NOR, environment(me));
					if( userp(all[i]) )
					{
						message("channel:rumor", 
YEL"��ҥ�ԡ�"+ "ĳ�ˣ�"+all[i]->query("name")+"��"+me->query("name")+"�ı̺��������Ի󣬿��費ֹ������\n"NOR,users());
					}				

					all[i]->die();
				}					
				else
				{
					if(all[i]->query("force")<damage)
					{
						all[i]->set("kee",j-damage);
						all[i]->set("force",0);

						if( userp(all[i]) )
							tell_object(all[i],HIR"�������ľ�����Ҳ���ܺ������򿹣�ʧȥ���ƿ��費ֹ��\n"NOR);								
					}
					else
					{
						all[i]->set("force",all[i]->query("force")-damage);

						if( userp(all[i]) )
							tell_object(all[i],CYN"�������˹��ֿ��̺����������ջ�����\n"NOR);
					}

				}
				}
			}
			else
			{
				me->set("force",me->query("force")-30 );

				tell_object(me,CYN"�����ڴ���̺���������\n"NOR);
			}
		}
	}
	
	if(k==0) ptime=30;

	if(ptime==30)
	{
		all = all_inventory(environment(me)); 

		for (i=0; i<sizeof(all); i++) 
		{
			if( ( (all[i]->is_character())&&(all[i]->query("id")!="corpse") ) )
			{
				if(all[i]!=me)
					tell_object(all[i],CYN+me->query("name")+"���������̺�������������ϡ�\n"NOR);
				else
					tell_object(me,CYN+"����������̺�������������ϡ�\n"NOR);
			}
		}

		for (j=0; j<sizeof(all); j++) 
			all[j]->delete_temp("sing");
	}
	else
	{
		call_out("do_sing",3,me,ptime+3,damage);
	}	
}



