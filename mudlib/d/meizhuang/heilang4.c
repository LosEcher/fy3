// Room: /d/suzhou/meizhuang/heilang4.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
һ������÷�����Ƶ����ȡ�ͷ�����������������̸Ƕ��ɵ����ܣ���
�ڷ���ꡣ����÷�������ڣ���ʱ�����������㡣����һ������ͨ����
Ժ��
LONG
	);
	set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"heilang5",
  "west" : __DIR__"heilang6",
  "east" : __DIR__"zoulang",
]));
	set("no_clean_up", 0);
	set("outdoors", "meizhuang");

	setup();
	replace_program(ROOM);
}
