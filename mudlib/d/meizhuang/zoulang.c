// Room: /d/suzhou/meizhuang/zoulang1.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
һ������÷�����Ƶ����ȡ�ͷ�����������������̸Ƕ��ɵ����ܣ���
�ڷ���ꡣ����÷�������ڣ���ʱ�����������㡣�����и����š�
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
	"east":__DIR__"yuemen",
  "west" : __DIR__"heilang4",
]));
	set("no_clean_up", 0);
	set("outdoors", "meizhuang");

	setup();
	replace_program(ROOM);
}
