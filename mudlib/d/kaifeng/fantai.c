// Room: /d/kaifeng/fantai.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
�������ڷ�̨֮��,����һ�����ǾŲ㣬80���׸ߵľ��ͷ�������Ϊ
׳�ۡ���ʫԻ��̨�ߵ��ĳ�����,�����ʶ�ʮ�ﴺ��,����31.8�ף���ש����
ÿש���о����ķ��񣬹���108�֣�7000�������ڴ���178��𾭱���.
LONG
	);
	set("outdoors", "/d/kaifeng");
	set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"zhulin",
  "west" : __DIR__"jiedao2",
]));
	set("no_clean_up", 0);
	set("objects", ([ /* sizeof() == 1 */
  "/d/suzhou/npc/eba.c" : 1,
]));

	setup();
	replace_program(ROOM);
}
