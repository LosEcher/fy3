// Room: /d/quanzhou/qinyuan-hill.c

inherit ROOM;

void create()
{
	set("short", "��Դɽ");
	set("long", @LONG
�����ֳ���,һ����ɽ����ǰ����,����Ǳ���Ϊ'����������һɽ'
����Դɽ��,��ɽɽ�����,��ᰵ���,��������,����.�ڵ�����һ��
ʯ��(shibei),����ϸ���˿�.
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "northdown" : "/d/jindezheng/shulin1",
  "southwest" : __DIR__"laojun-stone",
]));
	set("outdoors", "/d/quanzhou");
	set("item_desc", ([ /* sizeof() == 1 */
  "shibei" : "����׭���ż�������,���϶���'Ȫ�ݵؽ�',���滹��Ȫ��֪��ӡ.
",
]));

	setup();
	replace_program(ROOM);
}
