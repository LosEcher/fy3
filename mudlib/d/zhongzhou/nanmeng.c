// Room: /d/zhongzhou/nanmeng.c

inherit ROOM;

void create()
{
	set("short", "�ϳ���");
	set("long", @LONG
�������ݵ��ϳ����ˡ����˳ǲ�Զ����һ��Ƭ�����֡���˵�ϳ�����
һ�����������˳�û������������صĹٱ��Ƚ϶࣬���Գ��ﵹҲ̫ƽ��
�¡��ϱ������ݡ����ݡ��䵱�ȷ���
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  "/d/quanzhou/npc/bing.c" : 2,
]));
	set("outdoors", "/d/zhongzhou");
	set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"wendingnan4",
  "south" : __DIR__"nroad",
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
