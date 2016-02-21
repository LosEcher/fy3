// Room: /d/kaifeng/caidi5.c

inherit ROOM;

void create()
{
	set("short", "�˵�");
	set("long", @LONG
��Ƭ��԰�Ӽ����������һЩʱ���߲ˡ������м���ľ׮����Ĳ�
���ӣ���һЩ���ٵ��߲��������ϱ����ڿյ��ϴ�������һ��Сé����
�����и����ų�ȥ��������Ƭ�յء�
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 4 */
  "west" : __DIR__"caidi",
  "east" : __DIR__"kongdi",
  "south" : __DIR__"maofang",
  "north" : __DIR__"jiaomen",
]));
	set("outdoors", "/d/kaifeng");

	setup();
	replace_program(ROOM);
}
