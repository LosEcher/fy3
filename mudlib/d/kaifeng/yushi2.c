// Room: /d/kaifeng/yushi2.c

inherit ROOM;

void create()
{
	set("short", "Сԡ��");
	set("long", @LONG
��ЩСԡ�Ҿ���ר��װ�ޣ�������ר���ź��ɨ�����Ժܸɾ���ǽ
�����л��������ʻ��������Ϲ�����С���񡣷������е�Ȼ��ԡ�裬��
Щ��Ϊʾ�Է���ģ��ݷ�֮ǰ��Ҫ��ԡ���µġ�
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/obj/zaopeng.c" : 1,
]));
	set("no_fight", 1);
	set("no_clean_up", 0);
	set("bath_room", 1);
	set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"yushi",
]));    set("bath_equipment","ľ����");

	setup();
	replace_program(ROOM);
}
