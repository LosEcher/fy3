// music   yangzhou's ����

inherit NPC;
void create()
{
	set_name("����", ({ "chuanjia", "chuan jia", "jia" }) );
	set("gender", "����" );
	set("age", 44);
	set("long",
		"����λ��������Ĵ��ң�����ȥǿ׳������\n");
	set("mingwang", 1);
	set("combat_exp", 5000);
        set("str", 2);
        set("dex", 12);
        set("con", 2);
        set("int", 12);
	set("attitude", "peaceful");
        set("inquiry", ([
                       "chuan" : "��֪���뵽���ﰡ? \n" ,
                       "��" : "��֪���뵽���ﰡ? \n", 
                       ]) );
	setup();
        carry_object("/obj/cloth")->wear();
        carry_object(__DIR__"obj/chuanjiang")->wield();
	add_money("coin", 50);
}




