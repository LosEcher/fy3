// Room: /d/huanggon/echangan1.c

inherit ROOM;

void create()
{
	set("short", "��������");
	set("long", @LONG
�����ֶ�������,�Ǿ�ʦ����֮��,��������,�̷�,�ο�,����������
��,�ֵ����ϱ��Ǽ�Ǯׯ,��ߴ���һ������ž�������̵�����.�����ǳ�
����,�������򱱿ɵ��ྩ���׵ȵ�.
LONG
	);
	set("outdoors", "/d/huanggon");
	set("exits", ([ /* sizeof() == 4 */
  "north" : __DIR__"chaoyang",
  "east" : __DIR__"chaoyangmen",
  "west" : __DIR__"echangan",
  "south" : __DIR__"qianzhua",
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
