// Room: /d/huanggon/neishi.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
���з���һ�Ŵ�,һ��С��,�м�ֻ���ӿ���ǽ��һ��һ�񣬴�����
�����.���׷���һֻ��ˮ��,�Ե�ʮ��ͻأ,���½���ʪ��һ��Ƭ.���Ϸ�
�ż�ʮ������.���ӹص���ʵ,ÿһ�����춼����ֽ��ס.
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  "/d/emei/obj/pot.c" : 1,
]));
	set("no_clean_up", 0);
	set("item_desc", ([ /* sizeof() == 1 */
  "����" : "�ⴰ�ӿ����ܴ�(open window).
",
]));
	set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"dawu",
]));

	setup();
	replace_program(ROOM);
}
