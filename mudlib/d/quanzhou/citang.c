// Room: /d/quanzhou/citang.c

inherit ROOM;

void create()
{
	set("short", "��������");
	set("long", @LONG
����������һ��ܴ�ķ���,��������Ӷ������˺ϱ���ϸ,��̨��
�����˴��СС�����������ڵ�����,һ�ų���������������,����ڵ�
��Ʒȴֻʣ�°����ʣ���Ƶ���ͷ.
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  "/daemon/class/gaibang/lu.c" : 1,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"nstreet1",
]));

	setup();
	replace_program(ROOM);
}
