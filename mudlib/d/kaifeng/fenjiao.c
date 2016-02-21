// Room: /d/kaifeng/fenjiao.c

inherit ROOM;

void create()
{
	set("short", "���");
	set("long", @LONG
һ�ɳ�ζ�˱Ƕ�����һ�ѽ�ͷ��ӬΧ�Ÿ�С���Ӳ��ϴ�ת�����Ǹ�����
ɮ����������˵ص�С����ӣ���Ȼ�ǱȽϲ����ţ��㻹�ǸϿ��߿�Щ
�ɣ���С�Ļ����ȥ�ġ�
LONG
	);
	set("objects", ([ /* sizeof() == 2 */
  __DIR__"npc/popi.c" : 1,
  __DIR__"npc/wulai.c" : 1,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"maofang",
  "north" : __DIR__"kongdi",
]));
	set("outdoors", "/d/kaifeng");

	setup();
	replace_program(ROOM);
}
