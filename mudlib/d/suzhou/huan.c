// Room: /u/oldsix/room1/huan.c

#include <ansi.h>
inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
�����̲�������Ʈ��һҶС�ۣ�һ��������Ů��ִ˫����������ˮ
���������г���С�������������ǣ�
		��������ʮ���飬С��̰Ϸ�����١�
		����Ūˮ��ͷ̲��Ц�Ѻ�ȹ��Ѽ����
	����������а�����ö��ġ����ߵ������µ���һҶ[1;32mС��[2;37;0m��
LONG
	);
	set("objects",([
		__DIR__"npc/cui" :1,
	]));
	set("exits", ([ /* sizeof() == 1 */
		"east" :__DIR__"baigongti",
]));
	set("item_desc",([
	"С��" :"һ��С��(xiaochuan)�����з��ŶԽ��������������������¡�\n"
		+"�������룬��֪�ò�����ȥ��shang����\n",
	"xiaochuan" :"һ��С��(xiaochuan)�����з��ŶԽ��������������������¡�\n"
	+"�������룬��֪�ò�����ȥ��shang����\n",
		]));
	set("no_clean_up", 0);
	set("outdoors","room1");
	set("chuilang_dest","/d/suzhou/qinyun/huan_2.c");
	set("where","����");
	setup();
}
void init()
{
	add_action("do_shang","shang");
}
int do_shang()
{
	object me;
	me=this_player();
	message_vision(CYN"$NС�������̤�ϴ�ͷ����׼����������\n"
		+RED"˭֪����һ�����ȣ�����ͨ��һ��������С�\n"
		+CYN"�ҿ���ˮ֮���������Զ��$N��æ���ϰ�����\n"
		+"����ȫ����ʪ͸���Ǳ�������\n"NOR,me);
return 1;
}
