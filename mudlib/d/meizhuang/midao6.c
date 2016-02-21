// Room: /d/suzhou/meizhuang/midao1.c
#include <ansi.h>
inherit ROOM;
string status();
void create()
{
	set("short", "�ܵ�");
	set("long", @LONG
�ܵ��������쳣��ǽ���ϵ�ȼ���͵��ƺ��ѿ�ȼ������âԽ��Խ����
�ܵ��л������أ������ǲ���ѷɡ������и����ļ��š�
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
	"up":__DIR__"midao5",
]));
	set("no_clean_up", 0);
	set("damage",0);
	set("item_desc",([
		"����":	(: status :),
		"jiamen":	(: status :),
]));
	setup();
}
void init()
{
	add_action("do_zhen","zhen");
}

int do_zhen()
{
	object me,room;
	int damage,i;
	string msg;
	me=this_player();
	room=load_object(__DIR__"midao7.c");
	damage=query("damage");
	if(damage>=1000)
	return notify_fail("�����ѱ������ˣ�\n");
	if(me->query_skill("force")<80)
	return notify_fail("����ڹ���Ϊ������\n");
	i=me->query("force");
	if(i<=0)
	return notify_fail("��������Ѻľ����޷����Ƽ��ţ�\n");
 message_vision(CYN"����$N�����˿���ʹ������������˫�ƻ����������ȥ��\n"NOR,me);
	if(i<200)	msg=CYN"ֻ������ž����һ�����죬";
	else if(i<400)  msg=CYN"ֻ�������ۡ���һ�����죬";
	else if(i<600)  msg=YEL"ֻ�������ۡ���һ�����죬";
	else if(i<800)   msg=RED"ֻ������������һ�����죬";
	else	msg=RED"ֻ���á��䡱��һ�����죬";
	damage +=i;
	if(damage<200)	msg+="�����ƺ���Щ�Ѻۡ�";
	else if(damage<400)	msg+="���������˼����ƺۡ�";
	else if(damage<600)	msg+="�����ϵ��Ѻ�Խ��Խ��";
	else if(damage<800)	msg+="�������ѳ������ƶ���";
	else if(damage<1000)	msg+="�������ѳ������󶴣��ۿ���Ҫ�����ˡ�";
	else	{
		msg+="���ű�$N���˿�ȥ��";
		set("exits/west",__DIR__"midao7");
		tell_object(room,CYN"���ŴӶ��汻�˸����ˣ�\n"NOR);
		room->set("exits/east",__FILE__);
		}
	message_vision(msg+"\n"NOR,me);
	set("damage",damage);
	room->set("damage",damage);
	me->set("force",0);
	return 1;
}
string status()
{
	if(query("exits/west"))
	return "���ѱ��˸����Ƶļ��š�\n";
	return "һ�����ļ��ţ���û�б�����zhen���ơ�\n";
}
