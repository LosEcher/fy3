// Room: /d/huanggon/houtang1.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
�������������õ�ģ��,����ػ������������.һ�Ű����Ϲ���
��������,�м�һ��д��'��������֮λ',���һ��д��'������ƽ������
�ִ󽫾�֣֮λ',�����Ϲ���һ����ͷ,һ����ͷ,һֻ��,һβ��,������
֧��,ǰ�����Ű�ֽ.
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  "/daemon/class/yunlong/chen.c" : 1,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"dating",
]));

	setup();
	replace_program(ROOM);
}
