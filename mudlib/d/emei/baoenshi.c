// Room: /u/xxy/room/baoenshi.c

inherit ROOM;

void create()
{
	set("short", "������");
	set("long", @LONG
�����������������ı�����,�Ƕ�üɽ�˴�����֮һ,��˵,��
�������ǿ����ʵ�ȡ����'�Ķ�'֮һ��'��������'֮�����,����
��������һ������(lian),�����ܳ�.
LONG
	);
	set("no_clean_up", 0);
set("outdoors","/d/emei");
	set("item_desc", ([ /* sizeof() == 1 */
  "lian" : "����Խ��ǧ,��������,���ϲ���......
��������,�����,ϼ���ʴ�......
",
]));
	set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"gate",
  "north" : __DIR__"huizong",
]));

	setup();
	replace_program(ROOM);
}
