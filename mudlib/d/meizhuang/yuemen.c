// Room: /d/suzhou/meizhuang/yuemen.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
һ������̫������ţ���÷ׯ��Ϊ�������ߡ�������Ҫ��÷ׯ������
Ϣ����ʳ�������ĳ��������ߴ���ׯ���ǵ��᷿��
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
	"east":__DIR__"shibanlu1",
  "west" : __DIR__"zoulang",
]));
	set("objects",([
		__DIR__"npc/xiaoshidi":2,
]));
	set("no_clean_up", 0);
	set("outdoors", "meizhuang");

	setup();
	replace_program(ROOM);
}
