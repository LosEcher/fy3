// Room: /d/suzhou/meizhuang/tiemen.c
inherit ROOM;
#include <ansi.h>
void create()
{
	set("short", "����");
	set("long", @LONG
��ǰ�������ţ������⼣�߰ߣ��Ѳ²����ж��ٸ���ͷ�ˡ���������
����������Ķ��ף�����ǽ��΢���ĵƹ⣬Ҳ����Կ�����������Ρ�
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"midao9",
]));
	set("no_clean_up", 0);
	set("item_desc",([
		"����":	"����ں����Ŀ�����ʲô����֪�ܷ��꣨zuan����ȥ��\n",
		"dongkong":"����ں����Ŀ�����ʲô����֪�ܷ��꣨zuan����ȥ��\n",
]));
	setup();
}
void init()
{
	add_action("do_zuan","zuan");
}
int do_zuan()
{
	object me,room,*inv;
	me=this_player();
	if(!room=find_object(__DIR__"heilao"))
		room=load_object(__DIR__"heilao");
	if(me->query_encumbrance()>5000)	{
		return notify_fail("�����ϴ��Ķ���̫���ˣ������겻��ȥ��\n");
	}
	inv=all_inventory(room);
	if(sizeof(inv)>0)
		return notify_fail("����ռ�̫С�ˣ�û�����ȥ��\n");
	message_vision(CYN"$N����΢���������Ŷ��������˽�ȥ��\n"NOR,me);
	me->move(__DIR__"heilao");
	return 1;
}

