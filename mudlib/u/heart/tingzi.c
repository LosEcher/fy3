// Room: /u/viviran/tingzi.c

inherit ROOM;

void create()
{
	set("short", "����ͤ");
	set("long", @LONG
���Ǳ�������������ͤ����������Ϸ���ֲ����
�б����ġ�����Ҳ��һ��С�����������и��ֽ�����
Ϸ��ˮ��������ʢ����ĵ������÷���¼�������Щ��
֪����С����������ֻ�����������衣
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
  "southeast" : __DIR__"huayuan",
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
