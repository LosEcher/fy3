// thd:rock.c
// 97.7.18 by Aug

#include <ansi.h>
inherit ROOM;

void create()
{
      set("short", "������");
	set("long", @LONG
�����������ʯ���ŷ��������������ý����������֡������ҡ���ԭ
��������ǻ�ҩʦ���������ڹ�������֮�������ٲ������Ѿ��ܸ��ܵ���
ˮʯ���֮���ľ޴���������ǲ���˵�ˡ��޴��ˮעѹ�������ϣ���
���ò����������˹��򿹣�����������ļ��죬��������������Ĺ�֮ǰ
�������ϡ�
LONG
);

//	set("objects", ([ /* sizeof() == 1 */
//		__DIR__ "npc/chuanfu" :  1,
//	]));

//	set("detail", ([ /* sizeof() == 1 */
//		"duilian" : "�һ�Ӱ�����񽣣��̺����������\n",
//    ]));

//      set("exits", ([ /* sizeof() == 1 */
//          "west" : __DIR__"table",
//  	]));
      
	set("outdoors", "thd");

	setup();
//	replace_program(ROOM);
}

void init()
{
	object ob;

	if( interactive(ob = this_player()) ) 
	{
		remove_call_out("setup_obj");
		call_out("setup_obj", 1, ob);
	}

	add_action("do_jump", "jump");
}

int do_jump(string arg)
{
	if((arg!="back")&&(arg!="��ȥ")) return 0;
	
	remove_call_out("setup_obj");	
	remove_call_out("in_rock");	

	message_vision("$N����һԾ�����ᰶ�ϡ�\n",this_player());	
	this_player()->move(__DIR__"fall");
	

	return 1;
}

void setup_obj(object ob)
{
	write("����ǧ�ٶ��ص�ˮ�����ϵ�����ѹ�����㲻�ò�������������ˮ����ǿ�������\n");

	if(ob->query("combat_exp")>=200000)  // 200k
		write("���ˮ�����������ĸ�����˵�����㲻��ʲô����Ȼ��������Ҳ�ò���Ǳ���ˡ�\n");		

	call_out("in_rock", 3,ob);
}

int step=0;

void in_rock(object ob)
{
	int i,j;

	j=15+random(15);
	ob->set("kee", ob->query("kee")-j);	
	write("��������ڲ��ϵ����ġ�\n");

	if(ob->query("combat_exp")<200000)  // 200k
	{
		if( (int)ob->query("potential")>=100)
			write("���Ǳ���Ѿ����۵ĺܶ��ˣ�����ȥѧϰѧϰ�ˡ�\n");
		else
		{
			step++;

			if(step>=3)
			{
				ob->set("potential",ob->query("potential")+1);
				write("���Ǳ�������ˡ�\n");

				step=0;
			}
		}
	}

	if(ob->query("kee")<=90)	
		write(RED"�������Ҫ�������ˣ���øϿ��ϰ���\n"NOR);

	if(ob->query("kee")<=0)		
	{
		message_vision(
"$N�����������ˣ�$N��Ҳ֧�ֲ�ס�ˣ�$N��ˮ�����¶����ҡ�
\n",ob);		
		ob->move(__DIR__"nebeach1");	

		ob->die();		
	}
	else 	call_out("in_rock", 3,ob);
}

