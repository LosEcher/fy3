// Room: /d/quanzhou/xita.c

inherit ROOM;

void create()
{
	set("short", "������");
	set("long", @LONG
һ���˽�����ܶ�ʽʯ��,����Ϊ������,ͨ�ð�ɫ����ʯ����.ÿ�� 
��������,�����̷���,����,���,����,��ɮ�͵���,̫��,��ʿ����� 
����,�ܼ���80����������,��������̷�ͼ37��,̨��,�������в�ͬ 
��ͼ��װ��. 
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/quanzhou");
	set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"jietai",
]));
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/heshang.c" : 1,
]));

	setup();
	replace_program(ROOM);
}
