// Room: /d/quanzhen/fu-ceting.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
	���������Աߵ�һ��С���������������鷿�ģ�ֻ�Ǻ�Ա���
ʵ���Ҳ�����������װ�����棬���Ծ����γ����д���͵ĵط�������
�ڷ���һ�Ű������ͼ������ӣ����ϸ���õĲ軹��ð��������
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  "/d/hangzhou/npc/man.c" : 1,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"fu-huating",
  "west" : __DIR__"fu-datang",
]));

	setup();
	replace_program(ROOM);
}
