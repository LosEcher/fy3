// Room: /d/suzhou/meizhuang/qingshilu.c

inherit ROOM;

void create()
{
	set("short", "��ʯ��·");
	set("long", @LONG
����·��ɽ��ˮ��һֱͨ��ׯ�ڡ�����·���Ա�ض���÷����֦Ҷï
�ܣ��������÷��ʢ��֮�գ���ѩ�纣����Ȼ���Ͳ������㿴���˴�����
���Ե�ͷ����÷ׯ���治���������
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"meizhuang",
	"north" :__DIR__"qingshilu2",
]));
	set("objects",([
		__DIR__"npc/langgou":2,
]));
	set("no_clean_up", 0);
	set("outdoors","meizhuang");
	setup();
	replace_program(ROOM);
}
