// Room: /u/uuui/huatuo.c

inherit ROOM;

void create()
{
        set("short", "��٢��");
        set("long", @LONG
��٢�����˼�壬������������ҽס�ģ��������ƺ�
��Щ��ͬ�����������ǽ����һ����������ֻ������
���������ҡ����洲���·�������һһ��ȫ������
���𱱿����ĳ�����һ��ҽ��һ��̫ʦ�Ρ��輸��
����򵥣�����ȫʵ�á������������ӹ���һ��٢
�񣬰����ϻ���һЩ���衣
LONG
        );
        set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"huihong",
]));
        set("no_clean_up", 0);

        setup();
        replace_program(ROOM);
}

