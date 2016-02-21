// feng.c ����ʦ̫
// Modified by That Oct.1997
inherit NPC;
string ask_yao();
string ask_jian();

void create()
{
        set_name("����ʦ̫", ({ "jingfeng shitai","jingfeng","shitai"}));
        set("long",
      "����һλ����ʦ̫��ֻ����üĿ�״�����������һ�Ѹֵ�����Ȼ��Ȼ���й����ϡ�\n");
        set("gender", "Ů��");
        set("age", 42);
        set("attitude", "peaceful");
        set("mingwang", 10000);
        set("class", "bonze");

        set("str", 30);
        set("int", 30);
        set("con", 30);
        set("per", 30);

        set("max_kee", 1000);
        set("max_gin", 500);
        set("force", 1500);
        set("max_force", 1500);
        set("force_factor", 15);
        set("max_sen", 1500);

        set("combat_exp", 250000);
        set("score", 1000);
        set_skill("foxuexinde", 80);
        set_skill("force", 100);
        set_skill("dodge", 100);
        set_skill("parry", 90);
        set_skill("unarmed", 100);
        set_skill("sword", 100);
        set_skill("literate", 100);
        set_skill("sixiang-zhang", 100);
 
        set_skill("anying-fuxiang", 100);
        set_skill("emei-xinfa", 100);
        set_skill("huifeng-jian", 100);
        map_skill("force","emei-xinfa");
        map_skill("dodge","anying-fuxiang");
        map_skill("unarmed","sixiang-zhang");
        map_skill("sword","huifeng-jian");
        map_skill("parry","huifeng-jian");
        set("inquiry", ([
                "��ҩ" : (: ask_yao :),
                "����" : (: ask_jian :),
        ]));
        set("gao_count",3);
        set("jian_count",2);
        create_family("������", 4, "����");

        setup();
        carry_object("/obj/weapon/sword")->wield();
        carry_object("/obj/armor/ni-cloth.c")->wear();
        carry_object("/obj/armor/ni-xie")->wear();
}
void attempt_apprentice(object ob)
{
    command ("say �����ӷ�ƶ�᲻�յ��ӡ�\n");
    command ("say ���������ѧ�����ɵĹ��򣬻���ȥ�����׼�ʦ�ðɡ�\n");
    return;
}
string ask_yao()
{
        mapping fam;
        object ob;

        if (!(fam = this_player()->query("family")) || fam["family_name"] != "������")
                return RANK_D->query_respect(this_player()) +
                "�뱾��������������֪�˻��Ӻ�̸��";
        if (this_player()->query("eff_kee")>=this_player()->query("max_kee"))
                return "��δ�����ˣ�����ҩ����ʲô��";
        if (ob = present("tianxiang gao", this_player()))
                return "�����ϲ��Ǵ��ű�����ҩ����";
        if (query("gao_count") < 1)
                return "�������ˣ�������ҩ�Ѿ������˱��ɵ��ӡ�";
        add("gao_count", -1);
        ob = new("/d/emei/obj/tianxiang-gao");
        ob->move(this_player());
        return "�������б�����ҩ������ȥ���˰ɡ�";
}

string ask_jian()
{
        mapping fam;
        object ob;

        if (!(fam = this_player()->query("family")) || fam["family_name"] != "������")
                return RANK_D->query_respect(this_player()) +
                "�뱾��������������֪�˻��Ӻ�̸��";
        if (query("jian_count") < 1)
                return "������û��ʲô�����ø������´������ɡ�";
        if (ob = present("ruanjian", this_player()))
                return "�����ϲ��Ǵ�����������ô����Ҫ��";
        add("jian_count", -1);
        ob = new("/d/emei/obj/ruanjian");
        ob->move(this_player());
        return "��������һ����������ȥ�ðɡ�";
}

