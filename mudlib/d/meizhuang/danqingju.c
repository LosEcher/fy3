// Room: /d/suzhou/meizhuang/danqingju.c

inherit ROOM;

void create()
{
	set("short", "��������");
	set("long", @LONG
�������ƿ�������һ���˱Ǿ��㣬��������������Ŀ���������Ǿ�̳��
��ƿ���ƺ�«���Ʊ����ݽ���һֻ��ľͰ��Ȼ�ɵ÷��ڣ���������������
д������������֣�ľ�����û����ס�������ϸ���ӡ���Եü�Ϊ֣�ء�
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
	"east":__DIR__"chuangongfang1",
]));
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/danqingsheng" : 1,
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
