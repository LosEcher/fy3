// Room: /d/emei/fohushi.c

inherit ROOM;

void create()
{
	set("short", "������");
	set("long", @LONG
�����߳�������,��ǰ����һ����Ժ,�������'���ֲط���'֮��
�ķ�������,�±�����СϪ��������,Ϫˮ�峺�ޱ�,��Ϊ��Ϫ,��ʱʫ
������������'ҹ��������'��д��:Ѱʦ��ѧ��,���ڻ�Ϫ��.
LONG
	);
	set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"milin1",
  "north" : __DIR__"ligouyuan",
  "westup" : __DIR__"xixiang",
]));
	set("outdoors", "/d/emei");
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
