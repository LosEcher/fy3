// Room: bianj009.c
// mike.99.3.1
inherit ROOM;

void create()
{
	set("short", "��������");
	set("long",@LONG
�������꾩�����£�һ��ʮ����˽���ש��������ֱ����
�����������������ɫ���׳������������ⲿ����ʮ�ֲ�ͬ��
�͵ĺ�ɫ�������ɣ�ש�������м��ַ��졢���롢���𡢱���
���Ȼ���ͼ�������վ�տ������������
LONG
);
       set("exits", ([ /* sizeof() == 1 */
            "west"  : __DIR__"bianj007",
       ]));
       set("outdoors", "city");
	setup();
       replace_program(ROOM);
}
