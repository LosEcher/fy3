// Room: /d/quanzhou/dongta.c

inherit ROOM;

void create()
{
	set("short", "�����");
	set("long", @LONG
һ���˽�����ܶ�ʽʯ��,����Ϊ������,ͨ�ð�ɫ����ʯ����.ÿ��
��������,�����̷���,����,���,����,��ɮ�͵���,̫��,��ʿ�����
����,�ܼ���80����������,��������̷�ͼ37��,̨��,�������в�
ͬͼ��װ��.
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"jietai",
]));
	set("outdoors", "/d/quanzhou");

	setup();
	replace_program(ROOM);
}
