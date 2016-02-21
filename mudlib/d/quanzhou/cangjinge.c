// Room: /d/quanzhou/cangjinge.c

inherit ROOM;

void create()
{
	set("short", "�ؾ���");
	set("long", @LONG
�ؾ�����һ���ŵľ��񿴵���ͷ��,��˵�ڴ˸����ʮ��ᾭ����, 
����һЩ�Ƿ��ŵ��ϳ��书�ܼ�. 
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 1 */
  "eastdown" : __DIR__"jietai",
]));
	set("objects", ([ /* sizeof() == 2 */
  "/d/hainan/obj/swordbook.c" : 1,
  "/d/hainan/obj/dodgebook.c" : 1,
]));

	setup();
	replace_program(ROOM);
}
