// Room: /d/kaifeng/maofang.c

inherit ROOM;

void create()
{
	set("short", "Сé��");
	set("long", @LONG
�ڿյ��ϴ����һ��Сé�������ڵ����Ŷ�û�С�����ƽ�������˸�
��ӣ�������������ľ�塣���˵Ĳ�ӬΧ������ת��һ�ɳ�ζѬ����ֱ
���ӳ�ȥ��������Ƭ�˵أ������Ǹ���ѡ�
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"caidi5",
  "east" : __DIR__"fenjiao",
]));

	setup();
	replace_program(ROOM);
}
