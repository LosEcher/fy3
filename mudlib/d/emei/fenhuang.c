// Room: /u/xxy/room/fenhuang.c

inherit ROOM;

void create()
{
	set("short", "���̨");
	set("long", @LONG
���Сɽ����Լʮ��,��Լ��ʮ��,�ųƷ�˱�,���Ͻ���"ʥ������ͤ",
ͤ����������ͭ��(zhong)һ��.
LONG
	);
	set("no_clean_up", 0);
set("outdoors","/d/emei");
	set("item_desc", ([ /* sizeof() == 1 */
  "zhong" : "�Ӹ�2.8��,�Ӵ���2.4��,��1.25�򹫽�,�ų�'�츮����',
���������Ž����������������͸�ɮ������,�Լ�'������'
��,��ͬ���,��,��ȹ�Լ������.
",
]));
	set("exits", ([ /* sizeof() == 2 */
  "southdown" : __DIR__"road",
  "northdown" : __DIR__"gate",
]));

	setup();
	replace_program(ROOM);
}
